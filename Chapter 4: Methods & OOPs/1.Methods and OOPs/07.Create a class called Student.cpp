class Student
{
private:
    string name;
    int age;
    string gender;

public:
    Student(string name, int age, string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getGender()
    {
        return gender;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }
};