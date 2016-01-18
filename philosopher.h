#include <pthread.h>

typedef struct          s_p
{
    int                 x;
    int                 y;
}                       t_p;

typedef struct          s_pphilo
{
    t_p                 head;
    t_p                 l_arm1;
    t_p                 l_arm2;
    t_p                 l_arm3;
    t_p                 l_arm4;
    t_p                 r_arm1;
    t_p                 r_arm2;
    t_p                 r_arm3;
    t_p                 r_arm4;
    t_p                 stick1;
    t_p                 stick2;
    t_p                 stick3;
    t_p                 stick4;
    t_p                 life;
    t_p                 state;
}                       t_pphilo;

typedef struct      s_data {
    int             id;
    pthread_mutex_t mutex;
}                   t_data;

typedef struct      s_print {
    WINDOW          *win;
    t_pphilo        positions[7];
    int             id;
}                   t_print;

void *philosopher (void *id);
void grab_chopstick (int, int, char *);
void down_chopsticks (int, int);
int food_on_table ();
void print_win(WINDOW *win, t_pphilo positions[7]);

#define PHILOS 5
#define TIMEOUT 5000
#define FOOD 50
#define MAX_LIFE 25
#define EAT_T 3
#define REST_T 3
#define THINK_T 3
