<div align = "center">

# OOPs Part 2

</div>

## 1. Create a class called Animal

<details>

### Problem Description

```
Create a class called "Animal" with the following method:

makeSound: a method that returns a string "Some generic animal sound"

Then, create two subclasses of Animal called "Dog" and "Cat" with the following methods:

makeSound: a method in the Dog class that returns a string "Bark"

makeSound: a method in the Cat class that returns a string "Meow"
```

**Example 1:**

```js
Input:
 ["Solution", "makeAnimalSound", "makeDogSound", "makeCatSound"]
 [[], [], [], []]Output: [null, "Some generic animal sound", "Bark", "Meow"]
```

**Solutions**

- <details>
    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      Solution() {

      }

      string makeAnimalSound() {
          return "Some generic animal sound";
      }

      string makeDogSound() {
          return "Bark";
      }

      string makeCatSound() {
          return "Meow";
      }
  }
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Animal {
    public:
        // Method that returns a string "Some generic animal sound"
        string makeSound() {
            return "Some generic animal sound";
        }
    };

    class Dog : public Animal {
    public:
        // Overrides the makeSound method in the Animal class
        string makeSound() {
            return "Bark";
        }
    };

    class Cat : Animal {
    public:
        // Overrides the makeSound method in the Animal class
        string makeSound() {
            return "Meow";
        }
    };

    class Solution {
    public:
        Solution() {

        }

        string makeAnimalSound() {
            Animal animal;
            return animal.makeSound();
        }

        string makeDogSound() {
            Dog dog;
            return dog.makeSound();
        }

        string makeCatSound() {
            Cat cat;
            return cat.makeSound();
        }
    }
  ```

    </details>

---

</details>

</details>

## 2. Create a class called Animal I

<details>

```
Create a class in Java called "Animal" with the following properties:

name: a string representing the animal's name species: a string representing the animal's species

The class should have the following methods:

a constructor that takes name and species and sets the same to its properties
getName: a method that returns the animal's name
Then, create a subclass of Animal called "Dog" with the following property: breed: a string representing the dog's breed

The Dog class should have the following methods:

getName: a method that returns the dog name
The Dog class should also have the following constructor: Dog: a constructor that takes in the name, species, and breed as parameters and sets them as the properties of the dog object
Example:

Animal animal1 = new Animal("Fluffy", "Cat");

System.out.println(animal1.getName()); // should print "Fluffy"

Dog dog1 = new Dog("Buddy", "Dog", "Labrador");

System.out.println(dog1.getName()); // should print "Buddy"
```

**Example 1:**

Input:

```js
 ["Solution", "AnimalName", "DogName"]
 [[], ["Fluffy", "Cat"], ["Buddy", "Dog", "Labrador"]]Output: [null,"Fluffy","Buddy"]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```java
      class Solution {
      public Solution() {

      }

      public String AnimalName(String name, String species) {
          Animal animal = new Animal(name, species);
          return animal.getName();
      }

      public String DogName(String name, String species, String breed) {
          Dog dog = new Dog(name, species, breed);
          return dog.getName();
      }

      class Animal {
          private String name;
          private String species;

          public Animal(String name, String species) {
              this.name = name;
              this.species = species;
          }

          public String getName() {
              return name;
          }
      }

      class Dog extends Animal {
          private String breed;

          public Dog(String name, String species, String breed) {
              super(name, species);
              this.breed = breed;
          }

          public String getName() {
              return super.getName();
          }
      }
  }

  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Animal {
    private:
        // Properties
        string name;
        string species;
    public:
        // Constructor
        Animal(string name, string species) {
            this->name = name;
            this->species = species;
        }

        // Getters
        string getName() {
            return this->name;
        }

        string getSpecies() {
            return this->species;
        }
    };

    class Dog : public Animal {
        // Property
        private:
            string breed;

        public:
        // Constructor. // Calls the Animal class's constructor
        Dog(string name, string species, string breed): Animal(name, species) {
            this->breed = breed;
        }

        // Getter
        string getBreed() {
            return this->breed;
        }
    };




    class Solution {
    public:
        Solution() {

        }

        string AnimalName(string name, string species) {
            Animal animal(name, species);
            return animal.getName();
        }

        string DogName(string name, string species, string breed) {
            Dog dog(name, species, breed);
            return dog.getName();
        }
    }
  ```

    </details>

---

</details>

</details>

## 3. Create a class called Shape I

<details>

### Problem Description

```
Create a class called "Shape" with the following method:

getArea: a method that returns 0

Then, create two subclasses of Shape called "Rectangle" and "Circle" with the following methods:

getArea: a method in the Rectangle class that takes in the width and height of the rectangle and returns the rectangle's area

getArea: a method in the Circle class that takes in the radius of the circle and returns the circle's area
```

**Example 1:**

```
Input:
 ["Solution", "RectangleArea", "CircleArea"]
 [[], [10.00000, 20.00000], [5.00000]]Output: [null, 200.00000, 78.53982]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      Solution() { }

      double RectangleArea(double width, double height) {
          return width * height;
      }

      double CircleArea(double radius) {
          return M_PI * radius * radius;
      }
  };

  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
  class Shape {
  public:
      virtual double getArea() = 0;
  };

  class Rectangle : public Shape {
      private:
          double width;
          double height;
      public:
          Rectangle(double width, double height) {
              this->width = width;
              this->height = height;
          }

          double getArea() {
              return this->width * this->height;
          }
  };

  class Circle : public Shape {
      private:
          double radius;

      public:

      Circle(double radius) {
          this->radius = radius;
      }

      double getArea() {
          double PI = atan(1)*4;
          return PI * radius * radius;
      }
  };

  class Solution {
  public:
      Solution() {

      }

      double RectangleArea(double width, double height) {
          Rectangle rectangle(width, height);
          return rectangle.getArea();
      }

      double CircleArea(double radius) {
          Circle circle(radius);
          return circle.getArea();
      }
  }
  ```

    </details>

---

</details>

</details>

## 4. Create a class called Shape II

<details>

### Problem Description

```
Create a class in Java called "Shape" with the following properties:

name: a string representing the name of the shape

sides: an integer representing the number of sides of the shape

The class should have the following methods:

getName: a method that returns the name of the shape

getSides: a method that returns the number of sides of the shape

Then, create a subclass of Shape called "Circle" with the following property:

radius: a float representing the radius of the circle

The Circle class should have the following methods:

getRadius: a method that returns the radius of the circle

getCircumference: a method that returns the circumference of the circle

getArea: a method that returns the area of the circle

The Circle class should also have the following constructor:

Circle: a constructor that takes in the name and radius as parameters and sets them as the properties of the circle object
```

**Example 1:**

```js
Input:
 ["Solution", "ShapeName"]
 [[], ["square", 4]]Output: [null,"square"]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```java
    class Shape {
        private String name;
        private int sides;

        public Shape(String name, int sides) {
            this.name = name;
            this.sides = sides;
        }

        public String getName() {
            return name;
        }

        public int getSides() {
            return sides;
        }
    }

    class Solution {
        public Solution() {

        }

        public String ShapeName(String name, int sides) {
            Shape shape = new Shape(name, sides);
            return shape.getName();
        }
    }

  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
        class Shape {
        private:
            // Properties
            string name;
            int sides;

        public:
            // Constructor
            Shape(string name, int sides) {
                this->name = name;
                this->sides = sides;
            }

            // Getters
            string getName() {
                return this->name;
            }

            int getSides() {
                return this->sides;
            }
    };

    class Circle : public Shape {
        // Properties
    private:
            double radius;

    public:
        // Constructor
        Circle(string name, double radius) : Shape(name, 0) {
            // Calls the Shape class's constructor
            this->radius = radius;
        }

        // Getters
        double getRadius() {
            return this->radius;
        }
        
        double getPIValue() {
            return atan(1)*4;
        }

        double getCircumference() {
            return 2 * this->getPIValue() * this->radius;
        }

        double getArea() {
            return this->getPIValue() * this->radius * this->radius;
        }
    };

    class Solution {
    public:
        Solution() {

        }

        string ShapeName(string name, int sides) {
            Shape shape(name, sides);
            return shape.getName();
        }
    }
  ```

    </details>

---

</details>

</details>
