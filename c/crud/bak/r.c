#include <stdio.h>
#include <stdlib.h>
#include </usr/include/mysql/mysql.h>
int main() {
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
    MYSQL_FIELD *field;
	
	char *server = "localhost";
	char *user = "root";
	char *password = "Fedora38!"; /* set me first */
	char *database = "loja";
	
	conn = mysql_init(NULL);
	
	/* Connect to database */
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
	
	/* send SQL query */
	if (mysql_query(conn, "select * from produtos")) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
   
    res = mysql_store_result(conn);
    int num_fields = mysql_num_fields(res);
	
	/* output table name */
	/* printf("MySQL Tables in mysql database:\n"); */
   
	while ((row = mysql_fetch_row(res)) != NULL){
        for(int i = 0; i < num_fields; i++){
            if(i == 0){
                while(field = mysql_fetch_field(res)){
                    printf("%s ", field->name);
                }
                printf("\n");
            }
            printf("%s ", row[i] ? row [i] : "NULL");
        }
    }
   
	/* close connection */
	mysql_free_result(res);
	mysql_close(conn);
    return 0;
}

