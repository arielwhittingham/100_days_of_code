#include "space_age.h"
#include <iostream>

// source :https://exercism.org/tracks/cpp/exercises/space-age/edit

namespace space_age {


    int age(int age_secs) {
        

        const double earth_secs_per_year = 31557600;

        const double mercury {0.2408467};
        const double venus {0.61519726};
        const double earth {1.0};
        const double mars {1.8808158};
        const double jupiter {11.862615};
        const double saturn {29.447498};
        const double uranus {84.016846};
        const double neptune {164.79132};
        
        double age {};
        
        age = (age_secs / earth_secs_per_year) * mercury;
        std::cout << "Age on Mercury : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * venus;
        std::cout << "Age on Venus : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * earth;
        std::cout << "Age on Earth : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * mars;
        std::cout << "Age on Mars : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * jupiter;
        std::cout << "Age on Jupiter : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * saturn;
        std::cout << "Age on Saturn : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * uranus;
        std::cout << "Age on Uranus : " << age << std::endl;
        
        age = (age_secs / earth_secs_per_year) * neptune;
        std::cout << "Age on Neptune : " << age << std::endl;

        return 0;
    }

}