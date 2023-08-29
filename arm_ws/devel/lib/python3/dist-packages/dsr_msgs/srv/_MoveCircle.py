# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/MoveCircleRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class MoveCircleRequest(genpy.Message):
  _md5sum = "b4d5805fa8286b16807d993d69b59a57"
  _type = "dsr_msgs/MoveCircleRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# move_circle  
#____________________________________________________________________________________________

std_msgs/Float64MultiArray[] pos  # target[2][6]  
float64[2]      vel               # set velocity: [mm/sec], [deg/sec]
float64[2]      acc               # set acceleration: [mm/sec2], [deg/sec2]
float64         time #= 0.0       # Time [sec] 
float64         radius #=0.0      # Radius under blending mode [mm] 
int8            ref               # DR_BASE(0), DR_TOOL(1), DR_WORLD(2)
                                  # <DR_WORLD is only available in M2.40 or later> 
int8            mode #= 0         # MOVE_MODE_ABSOLUTE=0, MOVE_MODE_RELATIVE=1 
float64         angle1 #= 0.0     # angle1 [degree]
float64         angle2 #= 0.0     # angle2 [degree]
int8            blendType #= 0    # BLENDING_SPEED_TYPE_DUPLICATE=0, BLENDING_SPEED_TYPE_OVERRIDE=1
int8            syncType #=0      # SYNC = 0, ASYNC = 1

================================================================================
MSG: std_msgs/Float64MultiArray
# Please look at the MultiArrayLayout message definition for
# documentation on all multiarrays.

MultiArrayLayout  layout        # specification of data layout
float64[]         data          # array of data


================================================================================
MSG: std_msgs/MultiArrayLayout
# The multiarray declares a generic multi-dimensional array of a
# particular data type.  Dimensions are ordered from outer most
# to inner most.

MultiArrayDimension[] dim # Array of dimension properties
uint32 data_offset        # padding elements at front of data

# Accessors should ALWAYS be written in terms of dimension stride
# and specified outer-most dimension first.
# 
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
#
# A standard, 3-channel 640x480 image with interleaved color channels
# would be specified as:
#
# dim[0].label  = "height"
# dim[0].size   = 480
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
# dim[1].label  = "width"
# dim[1].size   = 640
# dim[1].stride = 3*640 = 1920
# dim[2].label  = "channel"
# dim[2].size   = 3
# dim[2].stride = 3
#
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.

================================================================================
MSG: std_msgs/MultiArrayDimension
string label   # label of given dimension
uint32 size    # size of given dimension (in type units)
uint32 stride  # stride of given dimension"""
  __slots__ = ['pos','vel','acc','time','radius','ref','mode','angle1','angle2','blendType','syncType']
  _slot_types = ['std_msgs/Float64MultiArray[]','float64[2]','float64[2]','float64','float64','int8','int8','float64','float64','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pos,vel,acc,time,radius,ref,mode,angle1,angle2,blendType,syncType

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveCircleRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pos is None:
        self.pos = []
      if self.vel is None:
        self.vel = [0.] * 2
      if self.acc is None:
        self.acc = [0.] * 2
      if self.time is None:
        self.time = 0.
      if self.radius is None:
        self.radius = 0.
      if self.ref is None:
        self.ref = 0
      if self.mode is None:
        self.mode = 0
      if self.angle1 is None:
        self.angle1 = 0.
      if self.angle2 is None:
        self.angle2 = 0.
      if self.blendType is None:
        self.blendType = 0
      if self.syncType is None:
        self.syncType = 0
    else:
      self.pos = []
      self.vel = [0.] * 2
      self.acc = [0.] * 2
      self.time = 0.
      self.radius = 0.
      self.ref = 0
      self.mode = 0
      self.angle1 = 0.
      self.angle2 = 0.
      self.blendType = 0
      self.syncType = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.pos)
      buff.write(_struct_I.pack(length))
      for val1 in self.pos:
        _v1 = val1.layout
        length = len(_v1.dim)
        buff.write(_struct_I.pack(length))
        for val3 in _v1.dim:
          _x = val3.label
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3
          buff.write(_get_struct_2I().pack(_x.size, _x.stride))
        _x = _v1.data_offset
        buff.write(_get_struct_I().pack(_x))
        length = len(val1.data)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*val1.data))
      buff.write(_get_struct_2d().pack(*self.vel))
      buff.write(_get_struct_2d().pack(*self.acc))
      _x = self
      buff.write(_get_struct_2d2b2d2b().pack(_x.time, _x.radius, _x.ref, _x.mode, _x.angle1, _x.angle2, _x.blendType, _x.syncType))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pos is None:
        self.pos = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pos = []
      for i in range(0, length):
        val1 = std_msgs.msg.Float64MultiArray()
        _v2 = val1.layout
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v2.dim = []
        for i in range(0, length):
          val3 = std_msgs.msg.MultiArrayDimension()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.label = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.label = str[start:end]
          _x = val3
          start = end
          end += 8
          (_x.size, _x.stride,) = _get_struct_2I().unpack(str[start:end])
          _v2.dim.append(val3)
        start = end
        end += 4
        (_v2.data_offset,) = _get_struct_I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.data = s.unpack(str[start:end])
        self.pos.append(val1)
      start = end
      end += 16
      self.vel = _get_struct_2d().unpack(str[start:end])
      start = end
      end += 16
      self.acc = _get_struct_2d().unpack(str[start:end])
      _x = self
      start = end
      end += 36
      (_x.time, _x.radius, _x.ref, _x.mode, _x.angle1, _x.angle2, _x.blendType, _x.syncType,) = _get_struct_2d2b2d2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.pos)
      buff.write(_struct_I.pack(length))
      for val1 in self.pos:
        _v3 = val1.layout
        length = len(_v3.dim)
        buff.write(_struct_I.pack(length))
        for val3 in _v3.dim:
          _x = val3.label
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3
          buff.write(_get_struct_2I().pack(_x.size, _x.stride))
        _x = _v3.data_offset
        buff.write(_get_struct_I().pack(_x))
        length = len(val1.data)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.data.tostring())
      buff.write(self.vel.tostring())
      buff.write(self.acc.tostring())
      _x = self
      buff.write(_get_struct_2d2b2d2b().pack(_x.time, _x.radius, _x.ref, _x.mode, _x.angle1, _x.angle2, _x.blendType, _x.syncType))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pos is None:
        self.pos = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pos = []
      for i in range(0, length):
        val1 = std_msgs.msg.Float64MultiArray()
        _v4 = val1.layout
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v4.dim = []
        for i in range(0, length):
          val3 = std_msgs.msg.MultiArrayDimension()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.label = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.label = str[start:end]
          _x = val3
          start = end
          end += 8
          (_x.size, _x.stride,) = _get_struct_2I().unpack(str[start:end])
          _v4.dim.append(val3)
        start = end
        end += 4
        (_v4.data_offset,) = _get_struct_I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.data = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        self.pos.append(val1)
      start = end
      end += 16
      self.vel = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=2)
      start = end
      end += 16
      self.acc = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=2)
      _x = self
      start = end
      end += 36
      (_x.time, _x.radius, _x.ref, _x.mode, _x.angle1, _x.angle2, _x.blendType, _x.syncType,) = _get_struct_2d2b2d2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_2d2b2d2b = None
def _get_struct_2d2b2d2b():
    global _struct_2d2b2d2b
    if _struct_2d2b2d2b is None:
        _struct_2d2b2d2b = struct.Struct("<2d2b2d2b")
    return _struct_2d2b2d2b
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/MoveCircleResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MoveCircleResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "dsr_msgs/MoveCircleResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success
"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveCircleResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class MoveCircle(object):
  _type          = 'dsr_msgs/MoveCircle'
  _md5sum = '54ef8d9932dcc86f5742e22ae7290ca5'
  _request_class  = MoveCircleRequest
  _response_class = MoveCircleResponse
