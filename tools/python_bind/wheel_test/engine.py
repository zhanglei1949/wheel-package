#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
# Copyright 2020 Alibaba Group Holding Limited. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import logging
import os

import wheel_bind

from importlib.resources import files

logger = logging.getLogger(__name__)

cur_file_path = os.path.dirname(os.path.abspath(__file__))
cur_dir_path = os.path.dirname(cur_file_path)
resource_dir = os.path.join(cur_dir_path,"nexg", "resources")


class Engine(object):
    """
    Database class to manage the database connection and operations.
    """

    def __init__(self):
        """
        Open a database connection.
        """
        self._engine = wheel_bind.PyEngine()


    def start(self):
        """
        Start the database connection.
        """
        self._engine.start()

    def stop(self):
        """
        Stop the database connection.
        """
        self._engine.stop()
