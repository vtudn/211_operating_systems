#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int empty(struct queue_t * q) {
	return (q->size == 0);
}

void enqueue(struct queue_t * q, struct pcb_t * proc) {
	/* TODO: put a new process to queue [q] */
	if (q->size >= MAX_QUEUE_SIZE) return;
	q->proc[q->size++] = proc;	
}

struct pcb_t * dequeue(struct queue_t * q) {
	/* TODO: return a pcb whose prioprity is the highest
	 * in the queue [q] and remember to remove it from q
	 * */
	if (q->size >= 0){
		int k = 0;
		for (int n = 1; n < q->size; n++){
			if (q->proc[n]->priority < q->proc[k]->priority)
				k = n;
		}
		struct pcb_t * temp = q->proc[k];
		for (int m = k + 1; m < q->size; m++){
			q->proc[m-1] = q->proc[m];
		}
		q->size--;
		return temp;
	} else
		return NULL;
}

