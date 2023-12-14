#────────────────────────────╮
NAME_SERVER	= server
NAME_CLIENT = client
#────────────────────────────╯

#---------	FUNCTIONS -----------
#───────────────────────────────╲
# FUNC	= Functions_here
#───────────────────────────────╱

#===================== OBJS =====================
#════════════════════════════════════════════════════╗
SRC_SERVER	= server.c
SRC_CLIENT	= client.c
LIBFT		= ./libft/libft.a
LIBFT_PATH	= ./libft
#════════════════════════════════════════════════════╝

#==================== Flags ====================
#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3 -g
INCLUDE	= -I. -Ilibft
#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

#==================== RULES ===================
#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "$(COLOUR_OK)[✔] $(COLOUR_BLUE)Just compiled $<$ $(NO_COLOUR)"

all:		message message_all $(NAME_SERVER) $(NAME_CLIENT) message_success

$(NAME_SERVER):	$(LIBFT)
	@$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT):	$(LIBFT)
	@$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) -o $(NAME_CLIENT)

$(LIBFT): $(shell make -C $(LIBFT_PATH) -q libft.a)
	@make -C $(LIBFT_PATH) > /dev/null

fclean:		message message_fclean
	@make -C $(LIBFT_PATH) fclean > /dev/null
	@$(RM) $(NAME_SERVER) $(NAME_CLIENT)

fclean_re:	message message_re
	@$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re:			message fclean_re $(NAME_CLIENT) $(NAME_SERVER) message_success
#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

#=================================== Messages ===================================
#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓

message_success:
	@echo "$(COLOUR_OK)┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓$(NO_COLOUR)"
	@echo "$(COLOUR_OK)┃ Compilation Success !!! : Creating $(NAME_SERVER)  ┃$(NO_COLOUR)"
	@echo "$(COLOUR_OK)┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛$(NO_COLOUR)"
	@echo "$(COLOUR_OK)┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓$(NO_COLOUR)"
	@echo "$(COLOUR_OK)┃ Compilation Success !!! : Creating $(NAME_CLIENT)  ┃$(NO_COLOUR)"
	@echo "$(COLOUR_OK)┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛$(NO_COLOUR)"

message_all:
	@echo "$(COLOUR_OK)[✔] $(COLOUR_RED)all\n$(NO_COLOUR)"

message_clean:
	@echo "$(COLOUR_OK)[✔] $(COLOUR_RED)clean\n$(NO_COLOUR)"

message_fclean:
	@echo "$(COLOUR_OK)[✔] $(COLOUR_RED)fclean\n$(NO_COLOUR)"
	@echo "$(COLOUR_OK)[✔] $(COLOUR_BLUE)Removed - $(NAME_SERVER)$(NO_COLOUR)"
	@echo "$(COLOUR_OK)[✔] $(COLOUR_BLUE)Removed - $(NAME_CLIENT)\n$(NO_COLOUR)"

message_re:
	@echo "$(COLOUR_OK)[✔] $(COLOUR_RED)re\n$(NO_COLOUR)"

message:
	@printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	@printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	@printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	@printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	@printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	@tput cup init
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)███████$(COLOUR_BLACK)████$(COLOUR_GREEN)████████████$(COLOUR_BLACK)████$(COLOUR_GREEN)███████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)█████$(COLOUR_BLACK)██$(COLOUR_GREEN)████$(COLOUR_BLACK)██$(COLOUR_GREEN)████████$(COLOUR_BLACK)██$(COLOUR_GREEN)████$(COLOUR_BLACK)██$(COLOUR_GREEN)█████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)█████████$(COLOUR_BLACK)██████████████$(COLOUR_GREEN)███████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)█████████$(COLOUR_BLACK)██$(COLOUR_RED)██████████$(COLOUR_BLACK)██$(COLOUR_GREEN)███████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)███████████$(COLOUR_BLACK)██$(COLOUR_RED)████████$(COLOUR_BLACK)██$(COLOUR_GREEN)███████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)███████████$(COLOUR_BLACK)██$(COLOUR_RED)████████$(COLOUR_BLACK)██$(COLOUR_GREEN)███████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)█████████████$(COLOUR_BLACK)████████$(COLOUR_GREEN)█████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "$(COLOUR_GREEN)██████████████████████████████████$(NO_COLOUR)"
	@echo "\n\n$(COLOUR_OK)    ...MAKEFILE BY DYDADO13...\n$(NO_COLOUR)"
	@echo "Name		:	minitalk"
	@echo "Author		:	dylmarti, Dylan Martinez"
	@echo "Compilator	:	$(CC)"
	@echo "Flags		:	$(CFLAGS)\n"


#━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

#============ Colours ============

COLOUR_BLUE		= \033[34m
COLOUR_GREEN	= \033[90m
COLOUR_BLACK	= \033[30m
COLOUR_RED		= \033[31m
COLOUR_OK		= \033[32m
COLOUR_BAD		= \033[31m
NO_COLOUR		= \033[0m