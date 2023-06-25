class Dog
{
private:
    string name;
    string species;
    string breed;

public:
    Dog(string name, string species, string breed)
    {
        this->name = name;
        this->species = species;
        this->breed = breed;
    }

    string getBreed()
    {
        return breed;
    }
}