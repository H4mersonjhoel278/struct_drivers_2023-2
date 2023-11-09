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
   uint16_t tail;         //cola

   uint16_t capacity;     //capacidad
   uint8_t is_full;       //buffer lleno


} ring_buffer_t;

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity);

uint8_t ring_buffer_put(ring_buffer_t *ring_buffer, uint8_t data);

uint8_t ring_buffer_get(ring_buffer_t *ring_buffer, uint8_t *data);

uint16_t ring_buffer_size(ring_buffer_t *ring_buffer);

uint8_t ring_buffer_is_empty(ring_buffer_t *ring_buffer);

uint8_t ring_buffer_is_full(ring_buffer_t *ring_buffer);

void ring_buffer_reset(ring_buffer_t *ring_buffer);

#endif /* INC_RING_BUFFER_H_ */
