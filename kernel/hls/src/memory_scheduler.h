#ifndef MEMORY_SCHEDULER_H
#define MEMORY_SCHEDULER_H

#include <vector>
#include "datatypes.h"
#include "common.h"

void scheduler(FILE *in,
        std::vector<anchor_dt, aligned_allocator<anchor_dt> >& data,
        std::vector<anchor_idx_t> &ns,
        int read_batch_size, int &max_dist_x, int &max_dist_y, int &bw);
void descheduler(
        std::vector<return_dt, aligned_allocator<return_dt> > &device_returns,
        std::vector<return_t> &rets, std::vector<anchor_idx_t> &ns);

#endif // MEMORY_SCHEDULER_H
