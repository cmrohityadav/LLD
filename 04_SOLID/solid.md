# SOLID
## what Problem when we don't use SOLID 
1. Maintainability
2. Readablity
3. Bugs

### S
Single Responsibility Principle (SRP)

### O
Open Close Principle (OCP)

### L
Leskov Substitution Principle (LSP)

### I
Intereface Segregation Principle (ISP)

### D
Dependency Inversion Principle (DIP)

# S — Single Responsibility Principle (SRP)
- A class should have only one reason to change
- A Class should only one thing
- Each class should do one thing only, and do it well.
- ek class ek kaam


# O — Open/Closed Principle (OCP)
- Software entities should be open for extension but closed for modification.
- It uses Abstraction,Inheritance,polymorphism

# L — Liskov Substitution Principle (LSP)
- Subclasses should be substitutable  for their Base classes
- Subtypes must be substitutable for their base types
- Example: If Bird has a method fly(), a subclass Penguin should not inherit it unless it logically supports flying

## Rule to follow for LSP
- Signature Rule
- Property Rule
    - Class Invariant
        - Some set of Rules for class which should follow by child class
    - History Constraint
- Method Rule


