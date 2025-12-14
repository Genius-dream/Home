#include <stdio.h>
int main()
{
    int start_hour,start_minute =0;
    int end_hour,end_minute =0;
    float time_diff =0;


    printf("请输入您的出发时间(小时 分钟):");
    scanf_s("%d %d",&start_hour,&start_minute);

    printf("请输入您的到达时间(当地时间 小时 分钟):");
    scanf_s("%d %d",&end_hour,&end_minute);

    printf("请输入两地时差(小时)(注：目的地比出发地快用正数，慢用负数):");
    scanf_s("%f",&time_diff);

    //全部转为分钟计算
    float start_total=start_hour*60+start_minute;
    float end_total=end_hour*60+end_minute+(time_diff*60);

    float flight_minutes;

    if(end_total>=start_total){
        flight_minutes=end_total-start_total;
    }
    else{
        flight_minutes=(24*60-start_total)+end_total;
    } //跨过一天型

    int hours = (int)flight_minutes / 60;
    int minutes = (int)flight_minutes % 60;

    printf("您在天上的时间为:%d小时%d分钟\n",hours, minutes);

    return 0;


}