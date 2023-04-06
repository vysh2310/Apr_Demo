int new_position(int sensor_pos1, int sensor_pos2)
{
int actuator_position;
int x, y, tmp, magnitude;
x=2;
actuator_position = 2;  /* default*/
tmp = 0;                        /* values */
magnitude = sensor_pos1 / 100;
y=magnitude + 2;

while (actuator_position < 100)
        {
        actuator_position++;
        y++;
        x++;
    }
if ((3*magnitude + 100) > 43)
        {
        y = y + 1;
       actuator_position = x / (x - y);
    
        }
return actuator_position*magnitude;     /* value */
}

int main(void){
        new_position(-100,100);}