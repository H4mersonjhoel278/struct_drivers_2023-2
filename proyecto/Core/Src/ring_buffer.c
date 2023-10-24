
#include "ring_buffer.h"

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity)
{
	ring_buffer->buffer = buffer;
	ring_buffer->capacity  = capacity;

	ring_buffer->head = 0;
	ring_buffer->tall = 0;
	ring_buffer->is_full = 0;


}
