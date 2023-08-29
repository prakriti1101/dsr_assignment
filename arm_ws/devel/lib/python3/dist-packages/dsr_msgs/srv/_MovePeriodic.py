# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/MovePeriodicRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MovePeriodicRequest(genpy.Message):
  _md5sum = "5b6eac8fb0c07b8dd41f6b01792ade3f"
  _type = "dsr_msgs/MovePeriodicRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# move_periodic  
#____________________________________________________________________________________________

float64[6] amp              # Amplitude (motion between -amp and +amp) [mm] or [deg]   
float64[6] periodic         # Period (time for 1 cycle) [sec]
float64    acc              # Acc-, dec- time [sec] 
int8       repeat           # Repetition count 
int8       ref  #= 1        # DR_BASE(0), DR_TOOL(1), DR_WORLD(2)
                            # <DR_WORLD is only available in M2.40 or later 

int8       syncType #=0     # SYNC = 0, ASYNC = 1
"""
  __slots__ = ['amp','periodic','acc','repeat','ref','syncType']
  _slot_types = ['float64[6]','float64[6]','float64','int8','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       amp,periodic,acc,repeat,ref,syncType

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MovePeriodicRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.amp is None:
        self.amp = [0.] * 6
      if self.periodic is None:
        self.periodic = [0.] * 6
      if self.acc is None:
        self.acc = 0.
      if self.repeat is None:
        self.repeat = 0
      if self.ref is None:
        self.ref = 0
      if self.syncType is None:
        self.syncType = 0
    else:
      self.amp = [0.] * 6
      self.periodic = [0.] * 6
      self.acc = 0.
      self.repeat = 0
      self.ref = 0
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
      buff.write(_get_struct_6d().pack(*self.amp))
      buff.write(_get_struct_6d().pack(*self.periodic))
      _x = self
      buff.write(_get_struct_d3b().pack(_x.acc, _x.repeat, _x.ref, _x.syncType))
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
      end += 48
      self.amp = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 48
      self.periodic = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 11
      (_x.acc, _x.repeat, _x.ref, _x.syncType,) = _get_struct_d3b().unpack(str[start:end])
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
      buff.write(self.amp.tostring())
      buff.write(self.periodic.tostring())
      _x = self
      buff.write(_get_struct_d3b().pack(_x.acc, _x.repeat, _x.ref, _x.syncType))
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
      end += 48
      self.amp = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      start = end
      end += 48
      self.periodic = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 11
      (_x.acc, _x.repeat, _x.ref, _x.syncType,) = _get_struct_d3b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
_struct_d3b = None
def _get_struct_d3b():
    global _struct_d3b
    if _struct_d3b is None:
        _struct_d3b = struct.Struct("<d3b")
    return _struct_d3b
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/MovePeriodicResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MovePeriodicResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "dsr_msgs/MovePeriodicResponse"
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
      super(MovePeriodicResponse, self).__init__(*args, **kwds)
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
class MovePeriodic(object):
  _type          = 'dsr_msgs/MovePeriodic'
  _md5sum = 'd18cadb0c21c585bdf0c4a1e6878f1a6'
  _request_class  = MovePeriodicRequest
  _response_class = MovePeriodicResponse
