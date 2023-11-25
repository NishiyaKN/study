#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql.h>
#include <locale.h>
#include <stdbool.h>

int main() {

    MYSQL *conexao;
    MYSQL_RES *res;
    MYSQL_ROW row;
    MYSQL_FIELD *field;

    char *server = "localhost";
    char *user = "root";
    char *database = "concessionaria";
    char *password = "Nobara38!";

    int escolha;

    // Inicializa a conexao MySQL
    conexao = mysql_init(NULL);

    // Conecta ao servidor MySQL
    if (mysql_real_connect(conexao, server, user, password, database, 0, NULL, 0) == NULL) {
        fprintf(stderr, "%s\n", mysql_error(conexao));
        mysql_close(conexao);
        exit(1);
    }

    // Loop principal do programa
    while (true) {  
        // Menu de opcoes
        printf("----- GLEM Concessionaria -----\n");
        printf("1 - Inserir um carro\n");
        printf("2 - Listar carros\n");
        printf("3 - Atualizar um carro\n");
        printf("4 - Deletar um carro\n");
        printf("5 - Carregar dados\n");
        printf("6 - Encerrar conexao\n");
        printf("-------------------------------\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Inserir um novo carro na tabela "carros"
                printf("----- Inserir novo carro -----\n");
                char query[256];
                int id;
                char nome[50], marca[50];
                double preco;

                printf("Digite o id: ");
                scanf("%d", &id);
                getchar();

                printf("Digite o nome do carro: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                printf("Digite a marca do carro: ");
                scanf("%s", marca);

                printf("Digite o preco do carro: ");
                scanf("%lf", &preco);

                printf("%d,%s,%s,%lf",id,nome,marca,preco);

                snprintf(query, sizeof(query), "INSERT INTO carros (id, nome, marca, preco) VALUES (%d, '%s', '%s', %lf)", id, nome, marca, preco);

                if (mysql_real_query(conexao, query, strlen(query)) != 0) {
                    fprintf(stderr, "Falha na insercao: %s\n", mysql_error(conexao));
                    exit(1);
                }

                printf("\n--------------------------------\n");
                break;

            case 2:
                // Listar carros da tabela "carros"
                printf("------- Lista de carro -------\n");

                if (mysql_query(conexao, "select * from carros")) {
                    fprintf(stderr, "%s\n", mysql_error(conexao));
                    exit(1);
                }

                res = mysql_store_result(conexao);
                int num_fields = mysql_num_fields(res);

                while ((row = mysql_fetch_row(res)) != NULL) {
                    int i;
                    for (i = 0; i < num_fields; i++) {
                        if (i == 0) {
                            while (field = mysql_fetch_field(res)) {
                                printf("%s ", field->name);
                            }
                            printf("\n");
                        }

                        printf("%s ", row[i] ? row[i] : "NULL");
                    }
                }

                mysql_free_result(res);

                printf("\n--------------------------------\n");
                break;

            case 3:
                // Atualizar informaes de um carro na tabela "carros"
                printf("------ Atualizar carro ------\n");
                char update_query[200];
                int update_id, update_choice;
                char update_nome[50], update_marca[50];
                double update_preco;

                printf("Digite o id do carro que deseja alterar: ");
                scanf("%d", &update_id);

                printf("Digite o campo que deseja alterar:\n");
                printf("1 - Nome\n");
                printf("2 - Marca\n");
                printf("3 - Preco\n");

                scanf("%d", &update_choice);

                switch (update_choice) {
                    case 1:
                        printf("Digite o novo nome: ");
                        scanf("%s", update_nome);
                        snprintf(update_query, sizeof(update_query), "update carros set nome = '%s' where id = %d ", update_nome, update_id);
                        break;

                    case 2:
                        printf("Digite a nova marca: ");
                        scanf("%s", update_marca);
                        snprintf(update_query, sizeof(update_query), "update carros set marca = '%s' where id = %d ", update_marca, update_id);
                        break;

                    case 3:
                        printf("Digite o novo preco: ");
                        scanf("%lf", &update_preco);
                        snprintf(update_query, sizeof(update_query), "update carros set preco = %lf where id = %d ", update_preco, update_id);
                        break;
                }

                if (mysql_real_query(conexao, update_query, strlen(update_query)) != 0) {
                    fprintf(stderr, "Falha na atualizacao: %s\n", mysql_error(conexao));
                    exit(1);
                }
                break;

            case 4:
                // Deletar um carro da tabela "carros"
                printf("------ Deletar carro ------\n");
                char delete_query[200];
                int delete_id;
                printf("Digite o id para deletar: ");
                scanf("%d", &delete_id);
                snprintf(delete_query, sizeof(delete_query), "delete from carros where id = %d", delete_id);

                if (mysql_real_query(conexao, delete_query, strlen(delete_query)) != 0) {
                    fprintf(stderr, "Falha ao deletar: %s\n", mysql_error(conexao));
                    exit(1);
                }
                break;

            case 5:
                // Carregar dados de um arquivo de texto ("carros.txt") para a tabela "carros"
                printf("------ Dados do TXT ------\n");
                int load_id;
                char load_nome[50], load_marca[50];
                double load_preco;
                char load_query[256];

                FILE *fp = fopen("carros.txt", "r");

                while (fscanf(fp, "%d %s %s %lf", &load_id, load_nome, load_marca, &load_preco) != EOF) {
                    snprintf(load_query, sizeof(load_query), "INSERT INTO carros (id, nome, marca, preco) VALUES (%d, '%s', '%s', %lf)", load_id, load_nome, load_marca, load_preco);
                    if (mysql_real_query(conexao, load_query, strlen(load_query)) != 0) {
                        fprintf(stderr, "Falha ao carregar dados: %s\n", mysql_error(conexao));
                        exit(1);
                    }
                }

                fclose(fp);
                break;

            case 6:
                // Encerrar a conexao e sair do programa
                mysql_close(conexao);
                exit(0);
            }
        }
    
    return 0;
}
