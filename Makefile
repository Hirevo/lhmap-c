##
## EPITECH PROJECT, 2018
## hmap
## File description:
## Makefile
##

CC		=	clang

NAME		=	libhmap.a

SRCDIR		=	src
OBJDIR		=	build

FILES		=	lhmap_new		\
			lhmap_with_capacity	\
			lhmap_clone		\
			lhmap_merge		\
			lhmap_clear		\
			lhmap_drop		\
			lhmap_size		\
			lhmap_keys		\
			lhmap_values		\
			lhmap_get		\
			lhmap_set		\
			lhmap_reserve		\
			lhmap_shrink_to_fit	\
			lhmap_for_each

SORTEDFILES	=	$(sort $(FILES))
SRCS		=	$(SORTEDFILES:%=$(SRCDIR)/%.c)
OBJS		=	$(SORTEDFILES:%=$(OBJDIR)/%.o)

CFLAGS 		=	-I../vec/src -W -Wall -Wextra -Wunused -Wuninitialized
LDFLAGS		=

DIRS		=

SORTEDDIRS	=	$(sort $(DIRS))
SRCDIRS		=	$(SORTEDDIRS:%=$(SRCDIR)/%)
OBJDIRS		=	$(SORTEDDIRS:%=$(OBJDIR)/%)

REDDARK 	=       \033[31;2m
RED     	=       \033[31;1m
GREEN   	=       \033[32;1m
YEL     	=       \033[33;1m
BLUE    	=       \033[34;1m
PINK    	=       \033[35;1m
CYAN    	=       \033[36;1m
RES     	=       \033[0m

all:	$(NAME)

$(NAME):	$(OBJDIR) $(OBJDIRS) $(OBJS)
		@echo -e "[$(RED)LINKING$(RES)] $(YEL)$(OBJDIR)/*.o$(RES) $(BLUE)=>$(RES) $(YEL)$(NAME)$(RES)"
		@ar rc $(NAME) $(OBJS) $(LDFLAGS)

clean:
	@rm -rf $(OBJDIR)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
	@echo -e "[$(RED)COMPILE$(RES)] $(YEL)$<$(RES) $(BLUE)=>$(RES) $(YEL)$@$(RES)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)build$(RES)"
	@mkdir -p $@

$(OBJDIR)/%:
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)$@$(RES)"
	@mkdir -p $@
