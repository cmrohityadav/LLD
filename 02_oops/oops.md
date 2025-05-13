# 🌟 What is OOP? 

**OOP** stands for **Object-Oriented Programming**. It's a way of writing computer programs by thinking about **real-life things (called objects)** and what they can **do**.

---

## 🧸 Real-World Example: **Toys in a Toy Store**

Imagine you have a toy store. You have different types of toys: **cars**, **dolls**, and **robots**.

Each toy has:

- **Properties** (what it is like):  
  - Color, size, name

- **Actions** (what it can do):  
  - A car can drive  
  - A robot can walk  
  - A doll can talk

In OOP, we put these toys into **classes**.

---

## 🧱 What's a Class?

A **class** is like a **blueprint** or a plan.  
It tells the computer:

> "Here’s what a toy should look like and what it can do."

So you can make many toys (called **objects**) from that one blueprint.

---

## 🧠 OOP Ideas Made Simple

| OOP Word   | Easy Meaning                  | Toy Store Example                   |
|------------|-------------------------------|--------------------------------------|
| Class      | A plan or template             | A plan for making cars or robots     |
| Object     | A real thing made from a class | A red car, a blue robot              |
| Properties | What the object has            | Color, size, name                    |
| Methods    | What the object can do         | Drive, walk, talk                    |

---

## 🧸 Example in Kid Language

- You have a **class called Robot**.
- The robot has a **color** and a **name**.
- It can **walk** and **talk**.

Now, you can create **many robots**:
- One red robot named "RoboTom"
- One blue robot named "RoboLily"

They all come from the same **Robot class**, but they are different **objects**.

---

## 🎉 In Short

> **OOP is like making things in your computer behave like things in the real world, with their own features and actions.**



## 🧸 Example in Adult Language

### - SBI Form Example (Bank Form)

Imagine you are filling out a **bank account form** at **SBI (State Bank of India)**.

In Object-Oriented Programming, we can think of this like:

- **Class**: `BankAccountForm`
  - It's the **blueprint** for how an account form should look and what information it needs.

- **Properties** (data fields):
  - `name`
  - `address`
  - `accountType`
  - `phoneNumber`
  - `IDProof`

- **Methods** (actions that can be done):
  - `submitForm()`
  - `verifyDocuments()`
  - `openAccount()`

Now, each time a new customer fills out the form, they are creating a **new object** of the `BankAccountForm` class:

```plaintext
form1 = BankAccountForm("Rahul", "Delhi", "Savings", "9876543210", "Aadhar")
form2 = BankAccountForm("Priya", "Mumbai", "Current", "9123456780", "PAN")
```



# 🏛️ The 4 Pillars of OOP (Object-Oriented Programming)

Object-Oriented Programming is built on **four main principles** that help in creating clean, organized, and reusable code.

---

## 🔢 Summary Table

| Pillar           | Simple Meaning                              | Real-Life Example                                |
|------------------|----------------------------------------------|--------------------------------------------------|
| 1. **Encapsulation** | Wrapping data and actions into one unit      | A capsule: medicine + coating together in one pill |
| 2. **Abstraction**   | Hiding complex details, showing only what’s needed | Driving a car: You use the steering wheel, not the engine wires |
| 3. **Inheritance**   | One class can take features of another class | A child inherits traits from parents               |
| 4. **Polymorphism**  | Same action, different behavior              | A remote button can control TV, AC, or fan — same press, different effect |

---

## 🧱 Detailed Descriptions

### 1. **Encapsulation**
- Keeps all related things (data and functions) together inside a class.
- It also protects the data by restricting direct access (using `private`, `getters`, and `setters`).
- Data security


### 2. **Abstraction**
- Shows only the important details and hides the complex parts.
- Makes the system easier to understand and work with.
- Example: You drive a car using the wheel and pedals, but you don’t need to know how the engine works.
- In C++, an interface is just a special kind of abstract class — one that contains only pure virtual methods and no implementation.
- Abstraction hides unnecessary details from a client, and showcase only what is necessary
- In C++:

- An abstract class is any class that has at least one pure virtual function.

- An interface is a special kind of abstract class that:

- Has only pure virtual functions

- Usually has no data members

- May include a virtual destructor (like your example)


### 3. **Inheritance**
- A class (called **child** or **subclass**) can inherit properties and behaviors from another class (called **parent** or **superclass**).
- It helps to **reuse code** and create a hierarchy.
- Example: A "Car" class can inherit from a "Vehicle" class.

### 4. **Polymorphism**
- "Poly" means many, and "morph" means form.
- It allows the same method name to work in different ways depending on the object.
- Example: A method `makeSound()` could work differently for a Dog and a Cat.

---