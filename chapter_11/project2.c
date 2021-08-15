#include <stdio.h>
void find_closest_flight(int desired_time,int* departure_time,int*arrival_time);
 int main(){
     int hr,min,departure_time, arrival_time,desired_time;
       printf("Enter the time in the form hr:min\n");
         scanf("%d:%d",&hr,&min);
        find_closest_flight(desired_time,&departure_time,&arrival_time);
        return 0;

 }
 void flight_closest_flight(int desired_time,int*departure_time,int*arrival_time)
 {int hr,min;
     desired_time = (hr*60) + min;
      if(desired_time >= 480 && desired_time <= 520){
          printf("closest departure time is 8:00am,arriving at 10:16am\n");
      }
      else if(desired_time >= 502 && desired_time <= 620 )
      {
          printf("closest departure time is 9:43pm,arrival at 11:52\n");
      }
      else if(desired_time >= 620 && desired_time <= 700){
          printf("closest departure time is 11:19am.arrival time is 1:32pm\n");

      }
      else if(desired_time >= 700 && desired_time <= 780){
           printf("closest departure time is 12:47pm arriva, time is 3:00pm\n");

      }
      else if(desired_time >= 780 && desired_time <= 880)
      {
          printf("closest departure time is 2:00pm arrival time is 4:00pm\n");
      }
      else if(desired_time >= 880 && desired_time <= 1000)
      {
          printf("closest departure time is 3:45pm,arrival time is 5:55pm\n");
      }
      else if(desired_time >= 1000 &&desired_time <= 1250)
      {
          printf("closest departure time is 7:00pm,and arrival time is 9:20\n");

      }
      else if (desired_time >= 1250 && desired_time <= 1440 )
      {
          printf("closet departure time is 9:45pm and arrival time is 11:pm\n");
      }
      else{
          printf("closest departure time is 8:00pm,arrival time is 10:16pm\n");

      }
 }