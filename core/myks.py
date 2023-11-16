import os

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'


import tensorflow as tf
from keras import backend as K
import cProfile

print(tf.keras)
const = K.constant([[42,23],[11,99]],dtype=tf.float16,shape=[2,2],name='xxxxx')
print(const)

mnist = tf.keras.datasets.mnist
(train_x,train_y),(test_x,test_y) = mnist.load_data()

epochs = 10
batch_size = 32

train_x,test_x = tf.cast(train_x/255.0,tf.float32) ,tf.cast(test_x/255.0,tf.float32)

train_y,test_y = tf.cast(train_y,tf.int64),tf.cast(test_y,tf.int64)

model1 = tf.keras.models.Sequential([tf.keras.layers.Flatten(input_shape=(28, 28)),
                                     tf.keras.layers.Dense(512,activation=tf.nn.relu),
                                     tf.keras.layers.Dropout(0.2),
                                     tf.keras.layers.Dense(10,activation=tf.nn.softmax)])
model1.build(input_shape=(28, 28))

predictions = model1(train_x[:1]).numpy()
print(predictions)

print(model1.summary())

tf.executing_eagerly()