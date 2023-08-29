# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/WriteDataRTRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WriteDataRTRequest(genpy.Message):
  _md5sum = "0677aa4f576b1a48e5f18c66c91f29d4"
  _type = "dsr_msgs/WriteDataRTRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# write_data_rt
#____________________________________________________________________________________________
float64[6] external_force_torque
int32      external_digital_input
int32      external_digital_output
float64[6] external_analog_input
float64[6] external_analog_output
"""
  __slots__ = ['external_force_torque','external_digital_input','external_digital_output','external_analog_input','external_analog_output']
  _slot_types = ['float64[6]','int32','int32','float64[6]','float64[6]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       external_force_torque,external_digital_input,external_digital_output,external_analog_input,external_analog_output

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WriteDataRTRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.external_force_torque is None:
        self.external_force_torque = [0.] * 6
      if self.external_digital_input is None:
        self.external_digital_input = 0
      if self.external_digital_output is None:
        self.external_digital_output = 0
      if self.external_analog_input is None:
        self.external_analog_input = [0.] * 6
      if self.external_analog_output is None:
        self.external_analog_output = [0.] * 6
    else:
      self.external_force_torque = [0.] * 6
      self.external_digital_input = 0
      self.external_digital_output = 0
      self.external_analog_input = [0.] * 6
      self.external_analog_output = [0.] * 6

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
      buff.write(_get_struct_6d().pack(*self.external_force_torque))
      _x = self
      buff.write(_get_struct_2i().pack(_x.external_digital_input, _x.external_digital_output))
      buff.write(_get_struct_6d().pack(*self.external_analog_input))
      buff.write(_get_struct_6d().pack(*self.external_analog_output))
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
      self.external_force_torque = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 8
      (_x.external_digital_input, _x.external_digital_output,) = _get_struct_2i().unpack(str[start:end])
      start = end
      end += 48
      self.external_analog_input = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 48
      self.external_analog_output = _get_struct_6d().unpack(str[start:end])
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
      buff.write(self.external_force_torque.tostring())
      _x = self
      buff.write(_get_struct_2i().pack(_x.external_digital_input, _x.external_digital_output))
      buff.write(self.external_analog_input.tostring())
      buff.write(self.external_analog_output.tostring())
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
      self.external_force_torque = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 8
      (_x.external_digital_input, _x.external_digital_output,) = _get_struct_2i().unpack(str[start:end])
      start = end
      end += 48
      self.external_analog_input = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      start = end
      end += 48
      self.external_analog_output = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/WriteDataRTResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WriteDataRTResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "dsr_msgs/WriteDataRTResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool       success
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
      super(WriteDataRTResponse, self).__init__(*args, **kwds)
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
class WriteDataRT(object):
  _type          = 'dsr_msgs/WriteDataRT'
  _md5sum = '57fbcf1b749a9e589d5aa77f87216c0e'
  _request_class  = WriteDataRTRequest
  _response_class = WriteDataRTResponse
