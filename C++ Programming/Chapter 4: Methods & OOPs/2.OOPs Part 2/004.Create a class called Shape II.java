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

  public Solution() {}

  public String ShapeName(String name, int sides) {
    Shape shape = new Shape(name, sides);
    return shape.getName();
  }
}
