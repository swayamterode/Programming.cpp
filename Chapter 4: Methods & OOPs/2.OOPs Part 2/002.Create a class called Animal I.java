class Solution
{
public
    Solution()
    {
    }

public
    String AnimalName(String name, String species)
    {
        Animal animal = new Animal(name, species);
        return animal.getName();
    }

public
    String DogName(String name, String species, String breed)
    {
        Dog dog = new Dog(name, species, breed);
        return dog.getName();
    }

    class Animal
    {
    private
        String name;
    private
        String species;

    public
        Animal(String name, String species)
        {
            this.name = name;
            this.species = species;
        }

    public
        String getName()
        {
            return name;
        }
    }

    class Dog extends Animal
    {
    private
        String breed;

    public
        Dog(String name, String species, String breed)
        {
            super(name, species);
            this.breed = breed;
        }

    public
        String getName()
        {
            return super.getName();
        }
    }
}
