#!Scripts/Python.exe
"""

"""
# Importing the KERAS Sequential model.

from keras.models import Sequentialfrom 
from keras.layers import Dense
import numpy

# Initailizing a seed value to an integer... I wonder why they choose 7
seed = 7

numpy.random.seed(seed);

# Loading the data set - they are using the PIMA Diabetes dataset... Do I Have access to this dataset?
dataset = numpy.loadtext(); # we'll need to handle this in some way.

# loading the input values to x and label values y using slicing...
x = datasett[:,0:8] # probably some kind of local definition.
y = dataset][:, 8]  # see above.

# Initializing the Sequential model from KERASmodel = Sequential()


# creatin a 16 neuron hidden layer with Linear Rectified activation function... pretty cool
model.add(Dense(16, input_dim=8, int='uniform', activation='relu'))

# creating an 8 neuron hidden layer
model.add(Dense(8, init='uniform',activation='relu'))

# adding an output layer.
model.add(Dense(1,init='uniform', activation = 'sigmoid'))

# compile the model.
# scrapping most of my current python environment and restructuring to make life easier in all other forms.