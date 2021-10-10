:warning: This calculator currently only supports the power rule. All problems that involve other steps will not work.

![newton and leibniz](https://d3idks24kkd2lv.cloudfront.net/wp-content/uploads/2016/12/who-invented-calculus_FeaturedThumb.jpg)

# CalculusCalculator
Going to try to build out a calculator for calculus problems. 
Will start with basic derivatives (ie. exponent rule), then as I
rebuild my calculus intuition I will start adding in chain rules,
e, division, multiplication, integrals, multiple order derivatives 
etc.

# Usage
cd into CalculusCalculator/cpp then run
```bash
make
```
When finished:
```bash
make clean
```

# Design
Each rule/type of problem should have its own file that will 
handle only that type. Going to have to figure out how to determine
the kind of problem and what not. This is a bigger project that will 
take a while. 

# TODO
* Figure out how to check if user did not input int and prompt them
to enter again if they did not. I have tried a couple methods that 
did not work.
  * while (std::cin.fail())
  * while (typeid(coefficient/variable).name != "i")
* Have DisplayAnswer() function lines scale with the line that changes
ie. if line with numbers grows by 2, all other lines should grow by 2
* Fix PowerRule function to take parameters if needed
* Implement powerrule function into natural log function to solve derivative
of U
# Future Goals
* GUI
* Problem recognition to decide what to use
