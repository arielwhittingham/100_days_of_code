//source: https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/

#ifndef DATE_H
#define DATE_H

class Date {

    private:
        int m_year;
        int m_month;
        int m_day;

    public:

        Date(int year, int month, int day); //constructor proptotype

        void SetDate(int year, int month, int day); // Function prototypes
        int getYear() { return m_year; }
        int getMonth() { return m_month; }
        int getDay()  { return m_day; }

};

#endif
