#Prac13


#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void display()=0;
};

class Coldblooded{
	public:
		virtual void display()=0;
};

class Oceanic{
	public:
		virtual void display()=0;
};

class Reptile: public Animal, public Coldblooded{
};

class Bird: public Animal{
};

class Pigeon: public Bird{
	public:
		void display(){
			cout<<"\nI am a Pigeon";
		}
};

class Kyte: public Bird{
	public:
		void display(){
			cout<<"\nI am a Kyte";
		}
};

class Vulture: public Bird{
	public:
		void display(){
			cout<<"\nI am a Vulture";
		}
};

class Penguin: public Bird{
	public:
		void display(){
			cout<<"\nI am a Penguin";
		}
};

class Albatrous: public Bird, public Oceanic{
	public:
		void display(){
			cout<<"\nI am a Albatrous";
		}
};

class Anaconda: public Reptile{
	public:
		void display(){
			cout<<"\nI am a Anaconda";
		}
};

class Alligator: public Reptile, public Oceanic{
	public:
		void display(){
			cout<<"\nI am a Alligator";
		}
};

int main(){
	Animal* ptr[7];
	Pigeon pigeon;
	Kyte kyte;
	Vulture vulture;
	Penguin penguin;
	Albatrous albatrous;
	Anaconda anaconda;
	Alligator alligator;
	
	ptr[0]=&pigeon;
	ptr[1]=&kyte;
	ptr[2]=&vulture;
	ptr[3]=&penguin;
	ptr[4]=&albatrous;
	ptr[5]=&anaconda;
	ptr[6]=&alligator;
	
		for(int i=0;i<7;++i){
			ptr[i]->display();
		}
		return 0;
}


#prac14:

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
	int main(){
		ifstream reader;
		ofstream odd_writer;
		ofstream even_writer;
		int val;
		reader.open("number.txt", ios::in | ios::out);
			if(!reader){
				cout<<"\nFile could not be opened";
				return EXIT_FAILURE;
			}
		odd_writer.open("odd.txt",ios::out);
			if(!odd_writer){
				cout<<"\nOdd File could not be opened";
				return EXIT_FAILURE;
			}
		even_writer.open("Even.txt",ios::out);
			if(!even_writer){
				cout<<"\nEven File could not be opened";
				return EXIT_FAILURE;
			}
			while(reader>>val){
				if(val%2){
					odd_writer<<val<<"\n";
				}
				else{
					even_writer<<val<<"\n";
				}
			}
			reader.close();
				odd_writer.close();
				even_writer.close();
			return EXIT_FAILURE;
	}