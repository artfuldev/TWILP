#TWILP (TWo-Input Logical Perceptron)
* Author: Kenshin Himura *(Sudarsan Balaji)*
* License: *GNU GPL v3 and CC-BY-NC-SA Licenses* (see gpl.txt and ccbyncsa.txt)
* Application Version: 1.0
* ReadMe Version: 1.0

##Description
TWo-Input Logical Perceptron, one of my first attempts at programmatically recreating a self-learning perceptron (artificial neuron).
It is one of my first and foremost fumbling attempts at getting to know artificial neural networks and their programming counterparts.
The TWo-Input Logical Perceptron (TWILP) actually takes four inputs, and processes them using a single neuron to adjust the respective weights
to implement the logic behind the inputs and outputs

##Variable Inputs
* x0 -> Enable (Provide all 1's to ensure this, as the TWILP only takes four input-output observations)
* x1 -> Logical Input A
* x2 -> Logical Input B
* ye -> Expected Output Y=A*B,
where * is a logical operation like AND or OR, while being a linearly separable logic.
* bias -> the bias provided, usually the value of the weight of the input which does not work.
* threshold -> the threshold, above which the weighted sum of inputs should be, to validate an output of logical 1.

##Explanations
TWILP takes the three inputs and their corresponding expected outputs, and adjusts its weights of the three inputs
such that the weighted sum including a bias with unit weight is greater than the threshold, only if the expected output is
a logical 1 or true case.

Follows the simplest form of gradient descent least squares error reduction in the form of the learning algorithm
popularly known as the Delta Rule. It can also be seen that this simple method of neuron learning is restricted to
linearly separable problems, which is a big disadvantage.

##Other Notes
The inputs to the console program are provided as integers, and make sense to the program only when entering values 1 or 0.
Any other values to the program are taken as gibberish and the program may not respond as expected.
This project was done in February 2012.

##Visions
* To create a backpropagation network which can work out the logic behind non-linearly separable logical operations like
EX-OR.