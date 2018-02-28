#!/bin/bash

prog="$1"
test_name="$prog"1.in
i=1
while [-q test_name]; do
		((i++))
		test_name=$prog$i.in
		echo "$test_name"
		./$prog $test_name
	done
