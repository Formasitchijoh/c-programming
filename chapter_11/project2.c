#include <stdio.h>
void find_closest_flight(int desired_time,int* departure_time,int*arrival_time);
 int main(){
     int hr,min,departure_time, arrival_time,desired_time;
       printf("Enter the time in the form hr:min");
         scanf("%d:%d",&hr,&min);
        find_closest_flight(desired_time,&departure_time,&arrival_time);
        return 0;

 }
 void flight_closest_flight(int desired_time,int*departure_time,int*arrival_time)
 {int hr,min;
     desired_time = (hr*60) + min;
      if(desired_time >= 480 && desired_time <= 520){
          printf("closest departure time is 8:00am,arriving at 10:16am");
      }
      else if(desired_time >= 502 && desired_time <= 620 )
      {
          printf("closest departure time is 9:43pm,arrival at 11:52");
      }
 }