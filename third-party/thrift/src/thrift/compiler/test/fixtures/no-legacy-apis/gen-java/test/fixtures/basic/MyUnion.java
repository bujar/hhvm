/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("MyUnion")
public final class MyUnion implements com.facebook.thrift.payload.ThriftSerializable {
    private static final TStruct STRUCT_DESC = new TStruct("MyUnion");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final MyUnion _DEFAULT = new MyUnion();

    public static final int _MYENUM = 1;
    private static final TField MY_ENUM_FIELD_DESC = new TField("myEnum", TType.I32, (short)1);
    public static final int _MYDATAITEM = 2;
    private static final TField MY_DATA_ITEM_FIELD_DESC = new TField("myDataItem", TType.STRUCT, (short)2);

    static {
      NAMES_TO_IDS.put("myEnum", 1);
      THRIFT_NAMES_TO_IDS.put("myEnum", 1);
      FIELD_METADATA.put(1, MY_ENUM_FIELD_DESC);
      NAMES_TO_IDS.put("myDataItem", 2);
      THRIFT_NAMES_TO_IDS.put("myDataItem", 2);
      FIELD_METADATA.put(2, MY_DATA_ITEM_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/no-legacy-apis/MyUnion"),
        MyUnion.class, MyUnion::read0));
    }

    private java.lang.Object value;
    private short id;

    public static MyUnion from(int _id, java.lang.Object _field) {
        return from((short) _id, _field);
    }

    public static MyUnion from(short _id, java.lang.Object _field) {
        java.util.Objects.requireNonNull(_field);
        if (!FIELD_METADATA.containsKey(Integer.valueOf(_id))) {
            throw new java.lang.IllegalArgumentException("unknown field " + _id);
        }

        MyUnion _u = new  MyUnion();

        try {
            switch(_id) {
                case 1:
                    _u.id = _id;
                    _u.value = (test.fixtures.basic.MyEnum) _field;
                    return _u;
                case 2:
                    _u.id = _id;
                    _u.value = (test.fixtures.basic.MyStruct) _field;
                    return _u;
                default:
                throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
            }
        } catch (Exception t) {
            throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
        }
    }

    @ThriftConstructor
    public MyUnion() {
    }
    
    @ThriftConstructor
    @Deprecated
    public MyUnion(final test.fixtures.basic.MyEnum myEnum) {
        this.value = myEnum;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public MyUnion(final test.fixtures.basic.MyStruct myDataItem) {
        this.value = myDataItem;
        this.id = 2;
    }
    
    public static MyUnion fromMyEnum(final test.fixtures.basic.MyEnum myEnum) {
        MyUnion res = new MyUnion();
        res.value = myEnum;
        res.id = 1;
        return res;
    }
    
    public static MyUnion fromMyDataItem(final test.fixtures.basic.MyStruct myDataItem) {
        MyUnion res = new MyUnion();
        res.value = myDataItem;
        res.id = 2;
        return res;
    }
    

    @com.facebook.swift.codec.ThriftField(value=1, name="myEnum", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyEnum getMyEnum() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a myEnum element!");
        }
        return (test.fixtures.basic.MyEnum) value;
    }

    public boolean isSetMyEnum() {
        return this.id == 1;
    }

    @com.facebook.swift.codec.ThriftField(value=2, name="myDataItem", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyStruct getMyDataItem() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a myDataItem element!");
        }
        return (test.fixtures.basic.MyStruct) value;
    }

    public boolean isSetMyDataItem() {
        return this.id == 2;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public void accept(Visitor visitor) {
        if (isSetMyEnum()) {
            visitor.visitMyEnum(getMyEnum());
            return;
        }
        if (isSetMyDataItem()) {
            visitor.visitMyDataItem(getMyDataItem());
            return;
        }
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        MyUnion other = (MyUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitMyEnum(test.fixtures.basic.MyEnum myEnum);
        void visitMyDataItem(test.fixtures.basic.MyStruct myDataItem);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
         return;
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _MYENUM: {
        oprot.writeFieldBegin(MY_ENUM_FIELD_DESC);
        test.fixtures.basic.MyEnum myEnum = (test.fixtures.basic.MyEnum)this.value;
        oprot.writeI32(myEnum == null ? 0 : myEnum.getValue());
        oprot.writeFieldEnd();
        break;
      }
      case _MYDATAITEM: {
        oprot.writeFieldBegin(MY_DATA_ITEM_FIELD_DESC);
        test.fixtures.basic.MyStruct myDataItem = (test.fixtures.basic.MyStruct)this.value;
        myDataItem.write0(oprot);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyUnion> asReader() {
      return MyUnion::read0;
    }
    
    public static MyUnion read0(TProtocol oprot) throws TException {
      MyUnion res = new MyUnion();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(MyUnion.NAMES_TO_IDS, MyUnion.THRIFT_NAMES_TO_IDS, MyUnion.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _MYENUM:
            if (__field.type == MY_ENUM_FIELD_DESC.type) {
              test.fixtures.basic.MyEnum myEnum = test.fixtures.basic.MyEnum.fromInteger(oprot.readI32());
              res.value = myEnum;
            }
            break;
          case _MYDATAITEM:
            if (__field.type == MY_DATA_ITEM_FIELD_DESC.type) {
              test.fixtures.basic.MyStruct myDataItem = test.fixtures.basic.MyStruct.read0(oprot);
              res.value = myDataItem;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'MyUnion' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static MyUnion defaultInstance() {
        return _DEFAULT;
    }

}