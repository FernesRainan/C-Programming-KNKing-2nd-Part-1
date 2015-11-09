//Write a program fragment that computes the average temperature for a month//

const short temperature_readings[30][24] = {0};
int sum, average;
int day, hour;

for (day = 0; day < 30; day++) {
    for (hour = 0; hour < 24; hour++) {
        sum += temperature_readings[day][hour];
    }
}
average = sum / (30 * 24);
