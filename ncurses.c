/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurses.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 12:04:41 by hlecuyer          #+#    #+#             */
/*   Updated: 2016/01/04 19:32:40 by hlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "libft.h"

typedef struct			s_p
{
	int					x;
	int					y;
}						t_p;

typedef struct			s_pphilo
{
	t_p					head;
	t_p					l_arm1;
	t_p					l_arm2;
	t_p					l_arm3;
	t_p					l_arm4;
	t_p					r_arm1;
	t_p					r_arm2;
	t_p					r_arm3;
	t_p					r_arm4;
	t_p					stick1;
	t_p					stick2;
	t_p					stick3;
	t_p					stick4;
	t_p					life;
	t_p					state;
}						t_pphilo;

void	init_head_life_state(t_pphilo *p, int tab[3][2])
{
	p->head.x = tab[0][0];
	p->head.y = tab[0][1];
	p->life.x = tab[1][0];
	p->life.y = tab[1][1];
	p->state.x = tab[2][0];
	p->state.y = tab[2][1];
}

void	init_l_arm(t_pphilo *p, int tab[4][2])
{
	p->l_arm1.x = tab[0][0];
	p->l_arm1.y = tab[0][1];
	p->l_arm2.x = tab[1][0];
	p->l_arm2.y = tab[1][1];
	p->l_arm3.x = tab[2][0];
	p->l_arm3.y = tab[2][1];
	p->l_arm4.x = tab[3][0];
	p->l_arm4.y = tab[3][1];
}

void	init_r_arm(t_pphilo *p, int tab[4][2])
{
	p->r_arm1.x = tab[0][0];
	p->r_arm1.y = tab[0][1];
	p->r_arm2.x = tab[1][0];
	p->r_arm2.y = tab[1][1];
	p->r_arm3.x = tab[2][0];
	p->r_arm3.y = tab[2][1];
	p->r_arm4.x = tab[3][0];
	p->r_arm4.y = tab[3][1];
}

void	init_stick(t_pphilo *p, int hls[4][2])
{
	p->stick1.x = hls[0][0];
	p->stick1.y = hls[0][1];
	p->stick2.x = hls[1][0];
	p->stick2.y = hls[1][1];
	p->stick3.x = hls[2][0];
	p->stick3.y = hls[2][1];
	p->stick4.x = hls[3][0];
	p->stick4.y = hls[3][1];
}


void	init_philosopher_1(t_pphilo *p)
{
	int	head_life_state[3][2] = {{2, 80}, {2, 92}, {3, 92}};
	int l_arm[4][2] = {{7, 74}, {7, 72}, {8, 70}, {8, 68}};
	int r_arm[4][2] = {{7, 94}, {7, 96}, {8, 98}, {8, 100}};
	int stick[4][2] = {{7, 59}, {8, 60}, {9, 61}, {10, 62}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_2(t_pphilo *p)
{
	int	head_life_state[3][2] = {{12, 37}, {16, 47}, {17, 47}};
	int l_arm[4][2] = {{18, 36}, {19, 35}, {20, 34}, {21, 33}};
	int r_arm[4][2] = {{11, 48}, {11, 50}, {10, 52}, {10, 54}};
	int stick[4][2] = {{25, 30}, {25, 31}, {25, 32}, {25, 33}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_3(t_pphilo *p)
{
	int	head_life_state[3][2] = {{12, 122}, {12, 134}, {13, 134}};
	int l_arm[4][2] = {{13 , 118}, {12, 116}, {12, 114}, {11, 112}};
	int r_arm[4][2] = {{18, 130}, {19, 131}, {20, 132}, {21, 133}};
	int stick[4][2] = {{8, 109}, {9, 108}, {10, 107}, {11, 106}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_4(t_pphilo *p)
{
	int	head_life_state[3][2] = {{32, 22}, {33, 34}, {34, 34}};
	int l_arm[4][2] = {{30, 28}, {29, 29}, {28, 30}, {27, 31}};
	int r_arm[4][2] = {{38, 30}, {39, 31}, {40, 32}, {41, 33}};
	int stick[4][2] = {{25, 137}, {25, 136}, {25, 135}, {25, 134}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_5(t_pphilo *p)
{
	int	head_life_state[3][2] = {{32, 137}, {31, 149}, {32, 149}};
	int l_arm[4][2] = {{38, 137}, {39, 136}, {40, 135}, {41, 134}};
	int r_arm[4][2] = {{30, 138}, {29, 137}, {28, 136}, {27, 135}};
	int stick[4][2] = {{45, 130}, {44, 129}, {43, 128}, {42, 127}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_6(t_pphilo *p)
{
	int	head_life_state[3][2] = {{47, 57}, {45, 68}, {46, 68}};
	int l_arm[4][2] = {{48, 52}, {48, 50}, {47, 48}, {46, 46}};
	int r_arm[4][2] = {{49, 69}, {49, 71}, {49, 73}, {49, 74}};
	int stick[4][2] = {{46, 37}, {45, 38}, {44, 39}, {43, 40}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_philosopher_7(t_pphilo *p)
{
	int	head_life_state[3][2] = {{47, 102}, {53, 110}, {54, 110}};
	int l_arm[4][2] = {{49, 98}, {49, 96}, {49, 94}, {49, 92}};
	int r_arm[4][2] = {{48, 114}, {48, 116}, {47, 118}, {46, 120}};
	int stick[4][2] = {{52, 85}, {51, 85}, {50, 85}, {49, 85}};

	init_head_life_state(p, head_life_state);
	init_l_arm(p, l_arm);
	init_r_arm(p, r_arm);
	init_stick(p, stick);
}

void	init_positions(t_pphilo positions[7])
{

	init_philosopher_1(&positions[0]);
	init_philosopher_2(&positions[1]);
	init_philosopher_3(&positions[2]);
	init_philosopher_4(&positions[3]);
	init_philosopher_5(&positions[4]);
	init_philosopher_6(&positions[5]);
	init_philosopher_7(&positions[6]);

/*	const int values[7][12][2] = {
		{{2, 80}, {7, 74}, {7, 72}, {8, 70}, {10, 10}, {10, 10}, {10, 10}},
		{{12, 37}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		{{12, 122}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		{{32, 22}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		{{32, 137}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		{{47, 57}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		{{47, 102}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}, {10, 10}},
		};*/
}

WINDOW* init_ncurses_option()
{
	WINDOW *local_win;

	raw();/* Line buffering disabled*/
	keypad(stdscr, TRUE);/* We get F1, F2 etc..*/
	noecho();/* Don't echo() while we do getch */
	refresh();
	local_win = newwin(70, 180, 0, 0);
	box(local_win, 0 , 0);
	wrefresh(local_win);
	return (local_win);
}

void	print_l_arm(WINDOW *win, t_pphilo p)
{
	/* TODO array of point per arm */

	mvwprintw(win, p.l_arm1.x, p.l_arm1.y, "xx");
	mvwprintw(win, p.l_arm1.x + 1, p.l_arm1.y, "xx");
	mvwprintw(win, p.l_arm2.x, p.l_arm2.y, "xx");
	mvwprintw(win, p.l_arm2.x + 1, p.l_arm2.y, "xx");
	mvwprintw(win, p.l_arm3.x, p.l_arm3.y, "xx");
	mvwprintw(win, p.l_arm3.x + 1, p.l_arm3.y, "xx");
	mvwprintw(win, p.l_arm4.x, p.l_arm4.y, "--");
	mvwprintw(win, p.l_arm4.x + 1, p.l_arm4.y, "--");
}

void	print_r_arm(WINDOW *win, t_pphilo p)
{
	/* TODO array of point per arm */

	mvwprintw(win, p.r_arm1.x, p.r_arm1.y, "xx");
	mvwprintw(win, p.r_arm1.x + 1, p.r_arm1.y, "xx");
	mvwprintw(win, p.r_arm2.x, p.r_arm2.y, "xx");
	mvwprintw(win, p.r_arm2.x + 1, p.r_arm2.y, "xx");
	mvwprintw(win, p.r_arm3.x, p.r_arm3.y, "xx");
	mvwprintw(win, p.r_arm3.x + 1, p.r_arm3.y, "xx");
	mvwprintw(win, p.r_arm4.x, p.r_arm4.y, "--");
	mvwprintw(win, p.r_arm4.x + 1, p.r_arm4.y, "--");
}

void	print_stick(WINDOW *win, t_pphilo p)
{
	/* TODO array of point per arm */

	mvwprintw(win, p.stick1.x, p.stick1.y, "o");
	mvwprintw(win, p.stick2.x, p.stick2.y, "o");
	mvwprintw(win, p.stick3.x, p.stick3.y, "o");
	mvwprintw(win, p.stick4.x, p.stick4.y, "o");
}

void	print_philosopher(WINDOW *win, t_pphilo p)
{
	mvwprintw(win, p.head.x, p.head.y, " ~~~~~~~~");
	mvwprintw(win, p.head.x + 1, p.head.y, "/ ^    ^ \\");
	mvwprintw(win, p.head.x + 2, p.head.y, "| 0    0 |");
	mvwprintw(win, p.head.x + 3, p.head.y, "\\  <    /");
	mvwprintw(win, p.head.x + 4, p.head.y, "  \\    /");
	mvwprintw(win, p.head.x + 5, p.head.y, "    ~");

	print_l_arm(win, p);
	print_r_arm(win, p);
	print_stick(win, p);

	mvwprintw(win, p.life.x, p.life.y, "Life: %d", 556);
	mvwprintw(win, p.state.x, p.state.y, "State: %s", "MIAM MAIM");
}

void print_win(WINDOW *win, t_pphilo positions[7])
{
	int i;

	i = 0;
	while (i < 7) {
		print_philosopher(win, positions[i]);
		i++;
	}
	wrefresh(win);
}

int main()
{
	WINDOW	*win;
	t_pphilo 	positions[7];

	init_positions(positions);
	initscr();/* Start curses mode   */
	win = init_ncurses_option();
	print_win(win, positions);
	refresh();/* Print it on to the real screen */
	getch();/* Wait for user input */
	endwin();/* End curses mode  */

	return 0;
}
