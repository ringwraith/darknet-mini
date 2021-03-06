#ifndef ACTIVATION_LAYER_H
#define ACTIVATION_LAYER_H

#include "network.h"

layer make_activation_layer(int batch, int inputs, ACTIVATION activation);
void forward_activation_layer(layer l, network net);
void backward_activation_layer(layer l, network net);

#endif

