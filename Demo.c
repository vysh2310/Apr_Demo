int new_position(int sensor_pos1, int sensor_pos2) 
{
int actuator_position;
int x, y, tmp, magnitude;

actuator_position = 2; 	/* default*/
tmp = 0;			/* values */
magnitude = sensor_pos1 / 100;
y = magnitude + 5;

while (actuator_position < 10)
	{
	actuator_position++;
    }
if ((3*magnitude + 100) > 43)
	{
	magnitude++;	
	actuator_position = x / (x - y);
    y = magnitude + 1;
 	}
return actuator_position*magnitude;	/* value */
}

