long getQueueTime(std::vector<int> queue) {

  unsigned long time = 0;

  for (auto v : queue) {
    time += v;
  }

  return time;
}

long queueTime(std::vector<int> customers, int n) {
  int time = 0;
  int n_customers = customers.size();

  if (n_customers == 0)
    return 0;

  if (n >= n_customers) {

    for (auto x : customers) {
      if (x > time)
        time = x;
    }

  } else if (n == 1) {

    for (auto x : customers)
      time += x;

  } else {

    std::map<int, std::vector<int>> queues;

    for (int j = 0; j < n; j++) {
      queues[j].push_back(customers[j]);
    }

    for (int i = n; i < n_customers; i++) {

      int faster_queue = 0;
      int time_queue = getQueueTime(queues[0]);

      for (int j = 1; j < n; j++) {
        int tmp_time = getQueueTime(queues[j]);
        if (tmp_time < time_queue) {
          time_queue = tmp_time;
          faster_queue = j;
        }
      }

      queues[faster_queue].push_back(customers[i]);
    }

    time = getQueueTime(queues[0]);

    for (int i = 1; i < n; i++) {

      int tmp_time = getQueueTime(queues[i]);

      if (tmp_time > time) {
        time = tmp_time;
      }
    }
  }

  return time;
}
