*This project has been created as part of the 42 curriculum by mcaro-ro*

# CPP Module 03 – Inheritance

## 📖 Description
CPP Module 03 is designed to introduce the fundamentals of inheritance in C++.
The goal is to practice class hierarchies, canonical form, method overriding, and multiple inheritance.
Through a series of four exercises, you will gradually build a family of ClapTrap-derived classes that evolve from a simple robot into more specialized and complex types.

---

## ⚙️ Instructions
1. Clone the repository from your Git workspace.
2. Navigate into the exercise folder (ex00, ex01, ex02, or ex03).
3. Compile the project using make.
4. Each exercise has its own main.cpp to test the required functionality.
5. Clean build artifacts with:
	```
	make clean
	```
 	```
	make fclean
	```
	```
	make re
	```
## 📚 Concepts Covered
1. Orthodox Canonical Form
	- Default constructor
	- Copy constructor
	- Copy assignment operator
	- Destructor
	These four functions ensure proper object lifecycle management.

2. Inheritance Basics
	- Deriving classes from a base (ClapTrap).
	- Reusing attributes and methods.
	- Constructor and destructor chaining.
3. Method Overriding
	- Redefining attack() in derived classes.
	- Adding unique abilities (guardGate, highFivesGuys, whoAmI).
4. Multiple Inheritance
	- Combining features from ScavTrap and FragTrap into DiamondTrap.
	- Handling attribute conflicts and shadowing.
5. Encapsulation & Specialization
	- Private attributes for state (hitPoints, energyPoints, attackDamage).
	- Specialized initialization in derived classes.
	- Clear separation of interface and implementation.

## 🧱 Exercises
- ex00 – Aaaaand… OPEN! ✅
	- Implement the base class ClapTrap.
	- Attributes: name, hit points (10), energy points (10), attack damage (0).
	- Methods: attack, takeDamage, beRepaired.
Focus: class design and canonical form.

- ex01 – Serena, my love! ✅
	- Implement ScavTrap inheriting from ClapTrap.
	- Attributes: hit points (100), energy points (50), attack damage (20).
	- Method: guardGate.
Focus: inheritance and method overriding.

- ex02 – Repetitive work ✅
	- Implement FragTrap inheriting from ClapTrap.
	- Attributes: hit points (100), energy points (100), attack damage (30).
	- Method: highFivesGuys.
Focus: inheritance and specialization.

- ex03 – Now it’s weird! (optional) ❌
	- Implement DiamondTrap inheriting from both ScavTrap and FragTrap.
	- Attributes: combines FragTrap’s hit points and attack damage with ScavTrap’s energy points.
	- Method: whoAmI.
Focus: multiple inheritance and name shadowing.
