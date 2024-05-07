

#define FT5X06_NUM_POINTS    5

#define DRV_ERR_TRAP(err)        if(err) { __asm("BKPT #0\n");} /* trap upon the error  */

typedef enum
{
    TOUCH_EVENT_NONE,
    TOUCH_EVENT_DOWN,
    TOUCH_EVENT_HOLD,
    TOUCH_EVENT_MOVE,
    TOUCH_EVENT_UP
} touch_event_t;

typedef struct st_touch_coord
{
    uint16_t      x;
    uint16_t      y;
    touch_event_t event;
} touch_coord_t;

typedef struct st_touch_data
{
    uint8_t       num_points;
    touch_coord_t point[FT5X06_NUM_POINTS];
} touch_data_t;

fsp_err_t ft5x06_init(void);
void ft5x06_payload_get(touch_data_t * touch_data);
