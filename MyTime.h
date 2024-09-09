// Add documentation for each function
#ifndef MYTIME_H 
#define MYTIME_H
#include <iostream>
    
class MyTime
{   
	public:

		// CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
		// DEFAULT ARGUMENTS
		MyTime(int h = 0, int m = 0);   

		// Member functions
		void Reset(int h, int m);

		void input(std::istream& ins);            

		void output(std::ostream& outs) const;

		int get_hours() const{return hours;}

		int get_minutes() const{return minutes;}

		// Friend functions
		MyTime operator + (const MyTime& other) const;
	
		MyTime operator - (const MyTime& other) const;
	
		MyTime operator * (int num) const;

		MyTime operator / (int num) const;

	

		bool operator == (const MyTime& other) const;

		bool operator < (const MyTime& other) const;

		bool operator <= (const MyTime& other) const;
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };
 	std::istream& operator >>(std::istream& ins, MyTime& t1);
		
	std::ostream& operator <<(std::ostream& outs, const MyTime& t1);

#endif