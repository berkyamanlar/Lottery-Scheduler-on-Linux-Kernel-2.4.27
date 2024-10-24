# Lottery Scheduler Algorithm for Linux Kernel 2.4.27

## Overview
This project was developed as a term project for the **CSE 331: Operating Systems** course. The goal of this project is to implement a lottery scheduling algorithm within the Linux Kernel version 2.4.27. This algorithm provides a probabilistic approach to CPU scheduling by assigning tickets to processes, allowing those with more tickets a higher chance of being selected for execution.

## Lottery Scheduling Algorithm Description
The lottery scheduling algorithm operates as follows:

- When a process is forked, it is assigned an initial number of tickets, defined as **5**.
- The scheduler randomly selects a ticket number from the available tickets of runnable processes. The process holding the selected ticket is scheduled to run next.
- Each process can hold at most **10** tickets and at least **1** ticket.
- The ticket allocation is dynamic based on the process's CPU usage:
  - If **10ms** or less has elapsed since the process last used the CPU, it loses one ticket (unless it already has **1** tickets).
  - If more than **100ms** has elapsed, the process gains one ticket (unless it already has **10** tickets).
  - If the elapsed time is between **10ms** and **100ms**, the process retains its current ticket count.
- The assignment of CPU time is limited to users with UIDs greater than 1000 (normal Linux user processes). System users and root can have a higher priority.
- The scheduler also updates a process's ticket number based on its user's process count changes, using the `setuid()` system call to adjust the process's UID when necessary.

## Acknowledgments
- The course materials and resources from CSE 331: Operating Systems.

