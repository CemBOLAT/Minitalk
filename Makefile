SERVER = server
SERVER_BONUS = server_bonus

CLIENT = client
CLIENT_BONUS = client_bonus

SRC_client = client.c
SRC_server = server.c
SRC_BONUS_client = client_bonus.c
SRC_BONUS_server = server_bonus.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(SERVER) $(CLIENT)

bonus: all $(CLIENT_BONUS) $(SERVER_BONUS)

$(CLIENT):
		$(CC) $(CFLAGS) $(SRC_client) -o $(CLIENT)
$(SERVER):
		$(CC) $(CFLAGS) $(SRC_server) -o $(SERVER)

$(CLIENT_BONUS):
		$(CC) $(CFLAGS) $(SRC_BONUS_client) -o $(CLIENT_BONUS)
$(SERVER_BONUS):
		$(CC) $(CFLAGS) $(SRC_BONUS_server) -o $(SERVER_BONUS)

clean:
		@rm -rf $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
		@echo "\033[92mclean completed\033[om"
		
fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
