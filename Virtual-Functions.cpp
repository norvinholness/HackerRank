int professor_id = 0;
int student_id   = 0;

class Person {
    public:
       int age;
       string name; 
    
       virtual void getdata () = 0;
       virtual void putdata () = 0;
};

class Professor : public Person {
    public: 
      int cur_id;
      int publications;
    
    Professor (){
       professor_id++;
       cur_id = professor_id;
    }
       
    void getdata () { 
        cin >> name >> age >> publications; 
    }
    
    void putdata(){
        cout << name << " " << age  << " " << publications << " " << cur_id << endl; 
    }
};

class Student : public Person {
    public: 
      int cur_id; 
      int marks[6];
      int sum = 0; 
    
    Student () {
        student_id++;
        cur_id = student_id;
    }
    
    void getdata() {
        cin >> name >> age;
        for (int i = 0; i < 6; i++ ){
            cin >> marks[i];
            sum += marks[i];
        }
    }
    
    void putdata () {
        cout << name << " "  << age  << " " << sum  << " " << cur_id << endl ;
    }
};