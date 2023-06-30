# simple_operating_system

**SCENARIO**: Practice and implement some aspects of an operating system such as scheduling and memory management. The scheduling algorithm used is priority feedback queue, which has some advantages over FIFO and round-robin. The memory management technique considered is segmentation with paging, which divides the main memory into variably-sized segments, which are then divided again into smaller fixed-size pages on disk. This helps reduce memory usage and simplify memory allocation but may causes internal fragmentation. In the end, all the implemented functions are put together for simulation.

**FUNCTIONALITIES**:
- The priority feedback queue algorithm uses 2 priority queues: ready_queue and run_queue
  - ready_queue: This queue contains processes that are ready to be executed. When the CPU finishes the previous job and is ready to start a new one, it will pick the next process from this queue.
  - run_queue: This queue contains all the processes that could not finish after a time slice. These processes wait until the ready_queue is empty, then they will be pushed back again to the ready_queue to finish their jobs.

- The segmentation with paging technique is implemented by functions such as searching for page table given a segment index of a process, translating a virtual address to physical address, memory allocation and memory deallocation.
