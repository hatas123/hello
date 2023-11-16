import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'
import tensorflow as tf

import cProfile

print(tf.executing_eagerly())

x = [[2.]]
m = tf.matmul(x, x)
print("hello, {}".format(m))

a = tf.constant([[1, 2],
                 [3, 4]])
print(a)

b = tf.add(a, 1)
print(b)

# Operator overloading is supported
print(a * b)