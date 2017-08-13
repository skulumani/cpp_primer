// Convert seconds to days, hours, minutes, seconds
#include <iostream>
int main()
{
    const int SECPERMIN = 60;
    const int SECPERHOUR = 3600;
    const int SECPERDAY = 86400; 

    long sec;

    std::cout << "Enter the number of seconds: ";
    std::cin >> sec;
    
    int days = sec / SECPERDAY;
    int hours = (sec % SECPERDAY) / SECPERHOUR;
    int min = ((sec % SECPERDAY) % SECPERHOUR) / SECPERMIN;
    int sec_rem = ((sec % SECPERDAY) % SECPERHOUR) % SECPERMIN;
    // convert sec to days
    std::cout << sec << " seconds = " << days << " days, " 
        << hours << " hours, " << min << " minutes, " << sec_rem << " seconds." << std::endl;
    return 0;
}
