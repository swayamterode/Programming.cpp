class Animal
{
private:
    string name;
    string species;

public:
    Animal(string name, string species)
    {
        this->name = name;
        this->species = species;
    }

    string getName()
    {
        return name;
    }

    string getSpecies()
    {
        return species;
    }
}