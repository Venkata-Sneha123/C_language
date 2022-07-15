#include<stdio.h>

enum week
{
sun=1,mon,tue,wed,thu,fri,sat
};

enum month
{
jan=1,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec
};

enum time
{
sec=1,min,hour,day,week,month,year
};

int main()
{
enum week today;
today=fri;
printf("today is =%d\n",today);

//enum month m;
enum time t;


int no_days=fri-sun;
printf("fri-sun = %d\n",no_days);

enum month m=jun;
printf("jun = %d\n",m);

printf("size of enum week =%ld\n",sizeof(today));
printf("size of enum month =%ld\n",sizeof(m));
printf("size of enum time =%ld\n",sizeof(t));

return 0;
}

/*
output:
today is =6
fri-sun = 5
jun = 6
size of enum week =4
size of enum month =4
size of enum time =4


*/
