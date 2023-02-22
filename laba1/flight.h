// Класс – самолет; поля: имя – char[30], скорость – float, тип – char[20]


#ifndef FLIGHT_H
#define FLIGHT_H
class Flight
{
	private:
		float speed = 0; 			//speed of flight
		int len_name = 0; 			//length of name
		char *name; 			//name address 
		int len_type = 0; 			//length of type
		char *type; 			//type address
	public: 
		Flight();
		Flight(const int speed, const char *name, const char *type); 				//construct by default
		Flight(const Flight &); 				//construct copy
		~Flight(); 				//destruct
		void Insert(const float speed, const char *name, const char *type);
		void Read();

};

#endif
