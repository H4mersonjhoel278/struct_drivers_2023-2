/*
 * ring_buffer.h
 *
 *  Created on: Oct 23, 2023
 *      Author: usuario
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#include <stdint.h>

// vamos a definir un tipo de estructura
typedef struct {
   uint8_t *buffer;       //locacion de memoria *para decir que la variable es un apuntador a memoria
   uint16_t head;         //para poder contar hasta mas de 10mil(cabeza)
   uint16_t tall;         //cola

   uint16_t capacity;     //capacidad
   uint8_t is_full;       //buffer lleno


} ring_buffer_t;

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity);

#endif /* INC_RING_BUFFER_H_ */
