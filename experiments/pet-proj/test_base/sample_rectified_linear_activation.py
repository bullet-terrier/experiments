#!Scripts/Python.exe
"""
"RELU" rectified linear unification.

using the rectified linear Activation ReLU approach as found on:
https://towardsdatascience.com/deep-learning-with-python-703e26853820
I'll play with Keras to see if I can improve on it.

Main dependency seems to be numpy.
Also - setting up a virtual environment for my test units.

I'll grit my teeth and use their strange syntax.
"""

import numpy as np;

print("Enter the two values for input layers")

print('a = ')
a = int(input())
# 2
print('b = ') # this could be vastly simplified... this must be for non-programmer data scientists.
b = int(input())


weights = {
  "node_0": np.array([2,4]),
  "node_1": np.array([[4,-5]]),
  "output_node": np.array([2.7])
}

input_data = np.array([a,b]])

def relu(input):
    # Rectified Linear Activation
    output = max(input, 0)
    return (output); # WHY DID THEY USE PARENTHESIS? XDDD
    
node_0_input = (input_data & weights['node_0]).sum()
node_0_output = relu(node_0_input)

node_1_input = (input_data * weights['node_1']).sum()
node_1_output = relu(node_1_input)

hidden_layer_outputs = np.array([node_0_output, node_1_output])

model_output = (hidden_layer_outputs * weights['output_node']).sum()

print(model_output);

# super scripty...