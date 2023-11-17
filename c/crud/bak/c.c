#include <stdio.h>
#include <stdlib.h>
#include </usr/include/mysql/mysql.h>
int main() {
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	
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
	if (mysql_query(conn, "insert into produtos values(5,'Azeite', 'Alimento', 12.69)")) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
   
	/* close connection */
	/* mysql_free_result(res); */
	mysql_close(conn);
    return 0;
}
