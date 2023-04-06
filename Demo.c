int where_are_the_errors(int input) {
   int x,y,k;

   k = input / 100;
   x = 2;
   y = 1;
   while (x < 10) {
      x++;
      y = y + 1;
   }

   if ((3*k + 100) > 43) {
      y++;
      x = x / (x - y);
   }
   return x;	
}

int main(void){
	where_are_the_errors(8);
}
