
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 50;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 500;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */  
    { XK_s,            1500 },
    { XK_d,            100  },
    { XK_x,            10   },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_h,        -1,     0 },
    { XK_j,         0,     1 },
    { XK_k,         0,    -1 },
    { XK_l,         1,     0 },
    { XK_u,        -1,    -1 },
    { XK_i,         1,    -1 },
    { XK_c,        -1,     1 },
    { XK_m,         1,     1 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_f,        1 },
    { XK_g,        3 },
    { XK_a,        2 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_e,        0 ,    25 },
    { XK_w,        0 ,   -25 },
    { XK_p,        25,    0  },
    { XK_o,       -25,    0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */  
    { XK_t,        "" },
    { XK_b,        "" },
    { XK_r,        "" },
    { XK_y,        "" },
    { XK_v,        "" },
    { XK_n,        "" },
    { XK_z,        "" },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_q
};
